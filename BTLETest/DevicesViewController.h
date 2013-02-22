//
//  DevicesViewController.h
//  BTLETools
//
//  Created by Tijn Kooijmans on 10-04-12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/Corebluetooth.h>

@class DeviceViewController;
@class ServicesViewController;

@interface DevicesViewController : UITableViewController <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *manager;
    NSMutableArray *devices;
    BOOL scanning;
    NSTimer *scanTimer;
    DeviceViewController *deviceVc;
    ServicesViewController *servicesVc;
}

@property (nonatomic,retain) ServicesViewController *servicesVc;

@end