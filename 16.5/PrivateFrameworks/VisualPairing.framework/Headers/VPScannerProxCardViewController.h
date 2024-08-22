// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VPSCANNERPROXCARDVIEWCONTROLLER_H
#define VPSCANNERPROXCARDVIEWCONTROLLER_H

@class UIViewController;


#import "VPScannerView.h"

@interface VPScannerProxCardViewController : UIViewController

@property (copy, nonatomic) id *scannedCodeHandler; // ivar: _scannedCodeHandler
@property (retain, nonatomic) VPScannerView *scannerView; // ivar: _scannerView


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(void)start;
-(void)stop;
-(void)viewDidLoad;


@end


#endif