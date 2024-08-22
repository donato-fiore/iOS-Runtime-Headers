// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSCENEHANDLEOBSERVERTOKEN_H
#define _SBSCENEHANDLEOBSERVERTOKEN_H

@class NSString, NSMutableDictionary;
@protocol SBSceneHandleObserverToken;

#import <Foundation/Foundation.h>


@interface _SBSceneHandleObserverToken : NSObject <SBSceneHandleObserverToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSMutableDictionary *owner; // ivar: _owner
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOwner:(id)arg0 ;


@end


#endif