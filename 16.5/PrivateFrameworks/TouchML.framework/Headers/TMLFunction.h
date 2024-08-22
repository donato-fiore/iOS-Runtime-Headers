// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLFUNCTION_H
#define TMLFUNCTION_H

@class NSString;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>


@interface TMLFunction : NSObject <TMLModelSerialize>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *functionBody; // ivar: _functionBody
@property (readonly, nonatomic) NSString *functionName; // ivar: _functionName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(id)initWithName:(id)arg0 body:(id)arg1 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif