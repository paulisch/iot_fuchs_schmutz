package at.fhhgb.mc.iot.ex03;

import org.eclipse.paho.client.mqttv3.MqttClient;
import org.eclipse.paho.client.mqttv3.MqttConnectOptions;
import org.eclipse.paho.client.mqttv3.MqttException;
import org.eclipse.paho.client.mqttv3.MqttMessage;
import org.eclipse.paho.client.mqttv3.persist.MemoryPersistence;

public class Main {

	public static void main(String[] args) {
		String topic        = "Temperature";
        int qos             = 2; //This level guarantees that the message will be delivered only once.
        String broker       = "tcp://192.168.12.1:1883";
        String clientId     = "TemperatureSimulator";
        MemoryPersistence persistence = new MemoryPersistence();

        try {
            MqttClient sampleClient = new MqttClient(broker, clientId, persistence);
            
            //Connect
            MqttConnectOptions connOpts = new MqttConnectOptions();
            connOpts.setCleanSession(true);
            System.out.println("Connecting to broker: "+broker);
            sampleClient.connect(connOpts);
            System.out.println("Connected");
            
            float startTemp = 20;   //° C
            float endTemp = 30;     //° C
            int time = 20000;       //ms
            int delta = 1000;       //ms
            
            int loops = time/delta;
            for(int i=0; i<=loops; i++) {
            	float currentTemp = (endTemp - startTemp) * ((float)i/loops) + startTemp;
            	//Send message
            	String content=Float.toString(currentTemp);
                System.out.println("Publishing message: "+content);
                MqttMessage message = new MqttMessage(content.getBytes());
                message.setQos(qos);
                sampleClient.publish(topic, message);
                System.out.println("Message published");
                
            	Thread.sleep(delta);
            }
            
            //Disconnect
            sampleClient.disconnect();
            System.out.println("Disconnected");
            System.exit(0);
        } catch(MqttException me) {
            System.out.println("reason "+me.getReasonCode());
            System.out.println("msg "+me.getMessage());
            System.out.println("loc "+me.getLocalizedMessage());
            System.out.println("cause "+me.getCause());
            System.out.println("excep "+me);
            me.printStackTrace();
        } catch(InterruptedException e) {
            e.printStackTrace();
        }
	}
}