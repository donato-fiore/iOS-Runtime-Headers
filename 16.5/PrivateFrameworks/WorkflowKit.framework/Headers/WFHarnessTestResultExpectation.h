// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSTESTRESULTEXPECTATION_H
#define WFHARNESSTESTRESULTEXPECTATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFHarnessTestResultExpectation : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, copy, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) NSInteger lineNumber; // ivar: _lineNumber


// -(id)initWithBlock:(id)arg0 filePath:(unk)arg1 lineNumber:(id)arg2  ;
-(void)testWithResult:(id)arg0 completion:(id)arg1 ;


@end


#endif