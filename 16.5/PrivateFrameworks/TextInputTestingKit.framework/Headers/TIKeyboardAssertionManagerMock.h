// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDASSERTIONMANAGERMOCK_H
#define TIKEYBOARDASSERTIONMANAGERMOCK_H

@class NSString;
@protocol TIKeyboardAssertionManaging, TIKeyboardAssertionManagerDelegate;

#import <Foundation/Foundation.h>


@interface TIKeyboardAssertionManagerMock : NSObject <TIKeyboardAssertionManaging>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TIKeyboardAssertionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAssertions;
@property (readonly, nonatomic) BOOL hasBackgroundActivityAssertions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addAssertionForObject:(id)arg0 ;
-(void)releaseBackgroundActivityAssertion;
-(void)removeAssertionForObject:(id)arg0 ;
-(void)retainBackgroundActivityAssertion;


@end


#endif