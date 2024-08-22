// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBREQUESTSYSTEMAPERTUREELEMENTSUPPRESSIONEVENTRESPONSE_H
#define SBREQUESTSYSTEMAPERTUREELEMENTSUPPRESSIONEVENTRESPONSE_H

@class NSUUID;


#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBRequestSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSUUID *invalidationIdentifier; // ivar: _invalidationIdentifier
@property (readonly, nonatomic) BOOL wantsGlobalSuppression; // ivar: _wantsGlobalSuppression


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 wantsGlobalSuppression:(BOOL)arg1 invalidationIdentifier:(id)arg2 ;


@end


#endif