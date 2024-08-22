// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSEARCHVISUALCONFIGURATION_H
#define SBHSEARCHVISUALCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHSearchVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets textFieldLandscapeLayoutInsets; // ivar: _textFieldLandscapeLayoutInsets
@property (nonatomic) UIEdgeInsets textFieldPortraitLayoutInsets; // ivar: _textFieldPortraitLayoutInsets
@property (nonatomic) CGFloat textFieldWidth; // ivar: _textFieldWidth


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif