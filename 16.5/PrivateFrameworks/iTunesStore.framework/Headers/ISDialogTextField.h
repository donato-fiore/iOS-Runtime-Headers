// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDIALOGTEXTFIELD_H
#define ISDIALOGTEXTFIELD_H

@class NSString;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface ISDialogTextField : NSObject <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger keyboardType; // ivar: _keyboardType
@property (getter=isSecure) BOOL secure; // ivar: _secure
@property (readonly) Class superclass;
@property (retain) NSString *title; // ivar: _title
@property (retain) NSString *value; // ivar: _value


+(id)textFieldWithTitle:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif