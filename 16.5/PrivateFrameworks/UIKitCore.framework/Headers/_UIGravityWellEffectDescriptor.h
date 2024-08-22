// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIGRAVITYWELLEFFECTDESCRIPTOR_H
#define _UIGRAVITYWELLEFFECTDESCRIPTOR_H

@class NSArray, NSString;
@protocol _UIContentEffectDescriptor;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface _UIGravityWellEffectDescriptor : NSObject <_UIContentEffectDescriptor>



@property (readonly, nonatomic) NSArray *compatibleDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITargetedPreview *primaryPreview; // ivar: _primaryPreview
@property (retain, nonatomic) NSArray *secondaryPreviews; // ivar: _secondaryPreviews
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview;


-(BOOL)canTransitionInPlaceToEffectWithDescriptor:(id)arg0 ;


@end


#endif