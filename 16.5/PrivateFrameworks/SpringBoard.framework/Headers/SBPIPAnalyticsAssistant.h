// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPANALYTICSASSISTANT_H
#define SBPIPANALYTICSASSISTANT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBPIPAnalyticsAssistant : NSObject {
    NSString *_bundleIdentifier;
    NSInteger _contentType;
    BOOL _isAutoPIPEnabled;
    CGFloat _activateDuration;
    CGFloat _activationTimestamp;
    id *_invalidationBlock;
}


@property (readonly, nonatomic) NSString *analyticsIdentifier; // ivar: _analyticsIdentifier


-(id)_generateMutableAnalyticsPayload;
-(id)generateAnalyticsPayload;
-(id)initWithBundleIdentifier:(id)arg0 contentType:(NSInteger)arg1 isAutoPIPEnabled:(BOOL)arg2 invalidationBlock:(id)arg3 ;
-(void)invalidate;
-(void)noteBecameActiveAtTime:(CGFloat)arg0 ;
-(void)noteBecameInactiveAtTime:(CGFloat)arg0 ;


@end


#endif