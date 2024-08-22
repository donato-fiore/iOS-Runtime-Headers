// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNTESTCOORDINATOR_H
#define SNTESTCOORDINATOR_H

@class UIApplication, NSString;
@protocol SNTestCoordinating;

#import <Foundation/Foundation.h>


@interface SNTestCoordinator : NSObject <SNTestCoordinating>



@property (readonly, nonatomic) UIApplication *application; // ivar: _application
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *launchTestName;
@property (readonly) Class superclass;


-(BOOL)requiresRotationForOrientation:(NSInteger)arg0 ;
-(NSInteger)lengthForNumberOfScreens:(NSInteger)arg0 direction:(NSUInteger)arg1 size:(struct CGSize )arg2 ;
-(NSUInteger)axisForDirection:(NSUInteger)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(void)failedTestWithTestName:(id)arg0 failureMessage:(id)arg1 ;
-(void)finishedTestWithTestName:(id)arg0 waitForCommit:(BOOL)arg1 ;
-(void)recapScrollTestWithTestName:(id)arg0 scrollView:(id)arg1 numberOfScreens:(id)arg2 direction:(NSUInteger)arg3 ;
// -(void)rotateToOrientation:(NSInteger)arg0 beforeRotation:(id)arg1 afterRotation:(unk)arg2  ;
-(void)scrollTestWithTestName:(id)arg0 scrollView:(id)arg1 iterations:(NSInteger)arg2 offset:(NSInteger)arg3 direction:(NSUInteger)arg4 ;
-(void)scrollTestWithTestName:(id)arg0 scrollView:(id)arg1 iterations:(NSInteger)arg2 offset:(NSInteger)arg3 numberOfScreens:(NSInteger)arg4 direction:(NSUInteger)arg5 ;
-(void)startedTestWithTestName:(id)arg0 ;


@end


#endif