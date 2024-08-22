// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLQRCODEVIEWCONTROLLER_H
#define WLQRCODEVIEWCONTROLLER_H



#import "WLQRCodeController.h"
#import "WLQRCode.h"

@interface WLQRCodeViewController : WLQRCodeController {
    BOOL _initialized;
}


@property (retain, nonatomic) WLQRCode *qrcode; // ivar: _qrcode


-(void)initQRCode;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif