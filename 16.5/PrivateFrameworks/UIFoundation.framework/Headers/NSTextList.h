// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTLIST_H
#define NSTEXTLIST_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NSTextList : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_markerFormat;
    NSUInteger _listFlags;
    NSInteger _startIndex;
    *void _listSecondary;
}


@property (readonly) NSUInteger listOptions;
@property (readonly) NSString *markerFormat;
@property (readonly, getter=isOrdered) BOOL ordered;
@property NSInteger startingItemNumber;


+(BOOL)supportsSecureCoding;
+(id)_standardMarkerAttributesForAttributes:(id)arg0 ;
+(void)initialize;
-(NSUInteger)options;
-(id)_markerAtIndex:(NSUInteger)arg0 inText:(id)arg1 ;
-(id)_markerForMarkerFormat:(id)arg0 itemNumber:(NSInteger)arg1 isNumbered:(*BOOL)arg2 substitutionStart:(*NSUInteger)arg3 end:(*NSUInteger)arg4 specifierStart:(*NSUInteger)arg5 end:(*NSUInteger)arg6 ;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_markerSpecifierAsCSSValue;
-(id)_markerSuffix;
-(id)_markerTitle;
-(id)_unaffixedMarkerForItemNumber:(NSInteger)arg0 ;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMarkerFormat:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithMarkerFormat:(id)arg0 options:(NSUInteger)arg1 startingItemNumber:(NSInteger)arg2 ;
-(id)markerForItemNumber:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif