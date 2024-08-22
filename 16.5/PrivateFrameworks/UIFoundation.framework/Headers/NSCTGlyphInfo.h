// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCTGLYPHINFO_H
#define NSCTGLYPHINFO_H

@protocol NSSecureCoding;


#import "NSGlyphInfo.h"

@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)allowsWeakReference;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)retainWeakReference;
-(NSUInteger)_cfTypeID;
-(NSUInteger)characterCollection;
-(NSUInteger)characterIdentifier;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)_baseString;
-(id)glyphName;
-(id)retain;
-(unsigned int)_glyph;
-(unsigned int)_glyphForFont:(id)arg0 baseString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif