// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCENEASYNCHRONOUSRENDERINGOPTIONS_H
#define UISCENEASYNCHRONOUSRENDERINGOPTIONS_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface UISceneAsynchronousRenderingOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float renderMaxAPL; // ivar: _renderMaxAPL
@property (readonly, nonatomic) CGFloat renderPeriod; // ivar: _renderPeriod
@property (readonly, copy, nonatomic) NSArray *renderTimes; // ivar: _renderTimes
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif