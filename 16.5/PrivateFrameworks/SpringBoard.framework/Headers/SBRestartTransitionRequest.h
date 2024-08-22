// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRESTARTTRANSITIONREQUEST_H
#define SBRESTARTTRANSITIONREQUEST_H

@class NSURL, BKSDisplayRenderOverlayDescriptor, NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding, NSCopying>



@property (copy, nonatomic) NSURL *applicationLaunchURL; // ivar: _applicationLaunchURL
@property (copy, nonatomic) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor; // ivar: _customOverlayDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSString *requester; // ivar: _requester
@property (nonatomic) int restartType; // ivar: _restartType
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsPersistentSnapshot; // ivar: _wantsPersistentSnapshot


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithRequester:(id)arg0 reason:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif