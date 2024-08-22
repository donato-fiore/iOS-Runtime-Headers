// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDICTATIONPRIVACYSHEETCONTROLLER_H
#define _UIDICTATIONPRIVACYSHEETCONTROLLER_H

@class VTUIDictationDataSharingOptInPresenter, OBPrivacyPresenter;
@protocol _UIDictationPrivacySheetControllerDelegate;


#import "UINavigationController.h"

@interface _UIDictationPrivacySheetController : UINavigationController

@property (retain, nonatomic) VTUIDictationDataSharingOptInPresenter *dataSharingOptInPresenter; // ivar: _dataSharingOptInPresenter
@property (nonatomic) NSObject<_UIDictationPrivacySheetControllerDelegate> *privacyDelegate; // ivar: _privacyDelegate
@property (retain, nonatomic) OBPrivacyPresenter *privacyPresenter; // ivar: _privacyPresenter
@property (nonatomic) NSInteger sheetType; // ivar: _sheetType


-(BOOL)_canShowWhileLocked;
-(id)initWithType:(NSInteger)arg0 ;
-(void)dismiss;
-(void)setPresentationDelegate:(id)arg0 ;


@end


#endif