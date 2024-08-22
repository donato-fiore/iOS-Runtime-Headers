// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCENEBACKGROUNDEDSTATUSASSERTION_H
#define SBSCENEBACKGROUNDEDSTATUSASSERTION_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface SBSceneBackgroundedStatusAssertion : NSObject {
    id *_invalidationHandler;
}


@property (readonly, copy, nonatomic) NSSet *scenes; // ivar: _scenes


-(id)initWithScenes:(id)arg0 invalidationHandler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif