// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREALERTITEMPRESENTER_H
#define SBSYSTEMAPERTUREALERTITEMPRESENTER_H

@class NSString, NSMapTable;
@protocol SBAlertItemPresenter;

#import <Foundation/Foundation.h>

#import "SBSystemApertureController.h"

@interface SBSystemApertureAlertItemPresenter : NSObject <SBAlertItemPresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *elementsToAssertions; // ivar: _elementsToAssertions
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBSystemApertureController *systemApertureController; // ivar: _systemApertureController


-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(BOOL)presentsAlertItemsModally;
-(id)initWithSystemApertureController:(id)arg0 ;
-(void)dismissAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentAlertItem:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif