import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.6
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3
import QtQuick.Window 2.12
import QtQml 2.3
import Qt.labs.calendar 1.0
Window {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    property int v: 0
    signal switch001(bool checked);
    Timer{
        interval: 1000
        running: true
        repeat: true
        onTriggered: {
           v = back.changeValue()
            if(v===6)
                b.open()
            else
                b.close()
        }
    }
    Dialog{
        id: b
        x: 0
        y: 0
        width: 100
        height: 100
    }
    Button{
        id: button1
        x: 47
        y: 229
        text: qsTr("Button 1")
        antialiasing: true
        scale: 1.3
        onClicked: back.changeValue();
    }
    Label{
        id: label
        x: 23
        y: 88
        width: 355
        height: 62
        text: qsTr("Label")
        Connections{
            target: back
            onValueChanged: label.text = s;
        }
    }
}
