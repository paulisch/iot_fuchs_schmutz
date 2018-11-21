package on_off_simulator;

import org.eclipse.paho.client.mqttv3.IMqttDeliveryToken;
import org.eclipse.paho.client.mqttv3.IMqttMessageListener;
import org.eclipse.paho.client.mqttv3.MqttCallback;
import org.eclipse.paho.client.mqttv3.MqttClient;
import org.eclipse.paho.client.mqttv3.MqttConnectOptions;
import org.eclipse.paho.client.mqttv3.MqttException;
import org.eclipse.paho.client.mqttv3.MqttMessage;
import org.eclipse.paho.client.mqttv3.persist.MemoryPersistence;

public class main {

	public static void main(String[] args) {
		String topic        = "stateOnOff";
        String content      = "1";
        int qos             = 2;
        String broker       = "tcp://192.168.12.1:1883";
        String clientId     = "OnOff";
        MemoryPersistence persistence = new MemoryPersistence();

        try {
            MqttClient sampleClient = new MqttClient(broker, clientId, persistence);
            
            //Connect
            MqttConnectOptions connOpts = new MqttConnectOptions();
            connOpts.setCleanSession(true);
            System.out.println("Connecting to broker: "+broker);
            sampleClient.connect(connOpts);
            System.out.println("Connected");
            
            sampleClient.setCallback(new MqttCallback() {
				
				@Override
				public void messageArrived(String arg0, MqttMessage m) throws Exception {
					byte[] payday = m.getPayload();
					String result = new String (payday);
					System.out.println(result);
					float temp = Float.parseFloat(result);
					
					if (temp > 25) {
			            //Send message
						System.out.println("Publishing message: "+content);
			            MqttMessage message = new MqttMessage(content.getBytes());
			            message.setQos(qos);
			            sampleClient.publish(topic, message);
			            System.out.println("Message published");
					}
				}
				
				@Override
				public void deliveryComplete(IMqttDeliveryToken arg0) {
					// TODO Auto-generated method stub
					
				}
				
				@Override
				public void connectionLost(Throwable arg0) {
					// TODO Auto-generated method stub
					
				}
			});
            sampleClient.subscribe("Temperature");
//            //Disconnect
//            sampleClient.disconnect();
//            System.out.println("Disconnected");
//            System.exit(0);
        } catch(MqttException me) {
            System.out.println("reason "+me.getReasonCode());
            System.out.println("msg "+me.getMessage());
            System.out.println("loc "+me.getLocalizedMessage());
            System.out.println("cause "+me.getCause());
            System.out.println("excep "+me);
            me.printStackTrace();
        }
	}

}
