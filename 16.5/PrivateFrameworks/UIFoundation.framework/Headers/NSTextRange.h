// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTRANGE_H
#define NSTEXTRANGE_H

@protocol NSTextLocation;

#import <Foundation/Foundation.h>


@interface NSTextRange : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) NSObject<NSTextLocation> *endLocation; // ivar: _endLocation
@property (readonly) NSObject<NSTextLocation> *location; // ivar: _location


+(id)combineTextRanges:(id)arg0 withTextRanges:(id)arg1 usingOperator:(int)arg2 ;
-(BOOL)containsLocation:(id)arg0 ;
-(BOOL)containsRange:(id)arg0 ;
-(BOOL)intersectsWithTextRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextRange:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithLocation:(id)arg0 ;
-(id)initWithLocation:(id)arg0 endLocation:(id)arg1 ;
-(id)terminator;
-(id)textRangeByFormingUnionWithTextRange:(id)arg0 ;
-(id)textRangeByIntersectingWithTextRange:(id)arg0 ;
-(void)dealloc;


@end


#endif