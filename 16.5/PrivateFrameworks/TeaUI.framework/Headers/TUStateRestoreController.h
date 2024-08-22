// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUSTATERESTORECONTROLLER_H
#define TUSTATERESTORECONTROLLER_H

@protocol TUStateRestoreControllerType;

#import <Foundation/Foundation.h>


@interface TUStateRestoreController : NSObject <TUStateRestoreControllerType>

 {
    ? timeWindow;
    ? store;
    ? anyNavigationHappenAfterBackground;
    ? alwaysAllowStateRestoration;
}


@property (nonatomic) BOOL hasStateDiscarded; // ivar: hasStateDiscarded
@property (nonatomic, readonly) BOOL isStateRestorationAllowed;
@property (nonatomic, readonly) BOOL isStateRestorationFeatureEnabled; // ivar: isStateRestorationFeatureEnabled


-(id)init;
-(id)initWithTimeWindow:(CGFloat)arg0 isRunningPPT:(BOOL)arg1 ;
-(id)initWithTimeWindow:(CGFloat)arg0 isStateRestorationEnabled:(BOOL)arg1 ;
-(void)markStateDiscarded;
-(void)navigationDidHappen;
-(void)sceneDidEnterBackground;


@end


#endif