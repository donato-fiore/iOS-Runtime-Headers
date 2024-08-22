// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIPOINTERROR_H
#define TIPOINTERROR_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface TIPointError : NSObject <NSCoding>



@property (readonly, nonatomic) CGPoint errorVector; // ivar: _errorVector


+(id)errorWithErrorVector:(struct CGPoint )arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithErrorVector:(struct CGPoint )arg0 ;
-(struct CGPoint )applyToPoint:(struct CGPoint )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif