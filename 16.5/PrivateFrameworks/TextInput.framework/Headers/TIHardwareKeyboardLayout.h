// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIHARDWAREKEYBOARDLAYOUT_H
#define TIHARDWAREKEYBOARDLAYOUT_H

@protocol NSSecureCoding;


#import "TIKeyboardLayout.h"

@interface TIHardwareKeyboardLayout : TIKeyboardLayout <NSSecureCoding>



@property (readonly, nonatomic) NSInteger keyboardType; // ivar: _keyboardType


+(BOOL)supportsSecureCoding;
+(void)flushLayoutCaches;
-(BOOL)isEqual:(id)arg0 ;
-(id)_ANSIFrames;
-(id)_ISOFrames;
-(id)_JISFrames;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardType:(NSInteger)arg0 ;
-(struct CGRect )_frameForKeyCode:(NSUInteger)arg0 ;
-(void)addExactString:(id)arg0 forKeyCode:(NSUInteger)arg1 ;
-(void)addString:(id)arg0 forKeyCode:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif