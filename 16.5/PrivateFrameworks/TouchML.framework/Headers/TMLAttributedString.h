// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLATTRIBUTEDSTRING_H
#define TMLATTRIBUTEDSTRING_H

@class NSAttributedString, NSString;
@protocol NSCopying, TMLAttributedStringJSExports;

#import <Foundation/Foundation.h>


@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports>



@property (copy, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, nonatomic) NSUInteger length;
@property (copy, nonatomic) NSString *string;


+(id)attributedStringWithFormat:(id)arg0 attributes:(id)arg1 ;
+(void)initializeJSContext:(id)arg0 ;
-(id)NSAttributedString;
-(id)attributedStringWithAttachment:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)enumerateAttribute:(id)arg0 inRange:(struct _NSRange )arg1 options:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(struct CGRect )boundingRectWithSize:(struct CGSize )arg0 options:(NSInteger)arg1 ;
-(struct CGSize )size;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)addAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)appendAttributedString:(id)arg0 ;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)insertAttributedString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif