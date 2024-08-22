// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSJSERROR_H
#define VSJSERROR_H

@class IKJSObject, NSString;
@protocol VSJSError;



@interface VSJSError : IKJSObject <VSJSError>



@property (nonatomic) NSUInteger code; // ivar: _code
@property (copy, nonatomic) NSString *message; // ivar: _message


-(id)description;
-(id)error;
-(id)init;


@end


#endif