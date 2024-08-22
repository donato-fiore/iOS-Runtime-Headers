// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSIENTOVERLAYPRESENTATIONREQUEST_H
#define SBTRANSIENTOVERLAYPRESENTATIONREQUEST_H

@class BSProcessHandle;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SBTransientOverlayViewController.h"
#import "SBWindowScene.h"

@interface SBTransientOverlayPresentationRequest : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) BSProcessHandle *originatingProcess; // ivar: _originatingProcess
@property (readonly, nonatomic) BOOL shouldDismissSiri; // ivar: _shouldDismissSiri
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)_copyWithClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewController:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif