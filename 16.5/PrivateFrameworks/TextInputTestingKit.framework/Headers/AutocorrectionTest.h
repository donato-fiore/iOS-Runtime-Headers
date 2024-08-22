// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOCORRECTIONTEST_H
#define AUTOCORRECTIONTEST_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface AutocorrectionTest : NSObject <NSCoding>



@property (readonly, nonatomic) id *corpusId; // ivar: _corpusId
@property (readonly, nonatomic) id *expectedOutput; // ivar: _expectedOutput
@property (readonly, nonatomic) id *input; // ivar: _input
@property (readonly, nonatomic) id *sourceMetadata; // ivar: _sourceMetadata
@property (readonly, nonatomic) id *touches; // ivar: _touches


+(id)testWithInput:(id)arg0 ;
+(id)testWithInput:(id)arg0 andCorpusId:(id)arg1 ;
+(id)testWithInput:(id)arg0 expectedOutput:(id)arg1 ;
+(id)testWithInput:(id)arg0 expectedOutput:(id)arg1 sourceMetadata:(id)arg2 withTouches:(id)arg3 andCorpusId:(id)arg4 ;
+(id)testWithTouches:(id)arg0 expectedOutput:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif