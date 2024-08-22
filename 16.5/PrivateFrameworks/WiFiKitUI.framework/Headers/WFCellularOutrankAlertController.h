// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCELLULAROUTRANKALERTCONTROLLER_H
#define WFCELLULAROUTRANKALERTCONTROLLER_H

@class NSString;


#import "WFPromptAlertController.h"

@interface WFCellularOutrankAlertController : WFPromptAlertController

@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (copy, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle


+(id)cellularOutrankAlertControllerWithNetworkName:(id)arg0 chinaDevice:(BOOL)arg1 completionHandler:(id)arg2 ;
+(id)defaultButtonTitleForChinaDevice:(BOOL)arg0 ;
+(id)messageForChinaDevice:(BOOL)arg0 ;
+(id)titleForNetworkName:(id)arg0 chinaDevice:(BOOL)arg1 ;


@end


#endif