// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREMLTRAINER_H
#define COREMLTRAINER_H

@class NSString, NSURL;
@protocol Evaluator;

#import <Foundation/Foundation.h>


@interface CoreMLTrainer : NSObject <Evaluator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly) Class superclass;


+(void)initialize;
-(id)evaluateWithModelURL:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(id)processModelURL:(id)arg0 ;


@end


#endif