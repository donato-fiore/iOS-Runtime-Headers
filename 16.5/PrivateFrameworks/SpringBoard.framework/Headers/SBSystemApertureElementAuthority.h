// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREELEMENTAUTHORITY_H
#define SBSYSTEMAPERTUREELEMENTAUTHORITY_H

@class NSString;
@protocol SAElementConsidering, SBSystemApertureElementAuthorityDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemApertureElementAuthority : NSObject <SAElementConsidering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SBSystemApertureElementAuthorityDelegate> *elementAuthorityDelegate; // ivar: _elementAuthorityDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)elementsOrderedByPromotionFromTemporallyOrderedElements:(id)arg0 withPreviousOrdering:(id)arg1 ;


@end


#endif