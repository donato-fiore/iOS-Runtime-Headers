// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPPROPERTYCONVERTER_H
#define TSWPPROPERTYCONVERTER_H


#import <Foundation/Foundation.h>


@interface TSWPPropertyConverter : NSObject



+(id)mapCharacterPropertiesFromNS:(id)arg0 ;
+(id)newFontWithFeaturesFromFont:(id)arg0 primaryStyle:(id)arg1 secondaryStyle:(id)arg2 ligatures:(int)arg3 ;
+(id)propertyMapToDictionary:(id)arg0 ;
+(void)initialize;
+(void)mapCharacterPropertiesFromNS:(id)arg0 toWP:(id)arg1 ;
+(void)mapCharacterPropertiesFromStyle:(id)arg0 secondaryStyle:(id)arg1 toNS:(id)arg2 stickyFont:(*id)arg3 scale:(CGFloat)arg4 ;
+(void)mapCharacterPropertiesFromStyle:(id)arg0 toNS:(id)arg1 stickyFont:(*id)arg2 scale:(CGFloat)arg3 ;
+(void)mapCharacterPropertiesFromStyles:(*id)arg0 styleCount:(unsigned int)arg1 toNS:(id)arg2 stickyFont:(*id)arg3 scale:(CGFloat)arg4 ;
+(void)mapFontFeaturesFromStyle:(id)arg0 secondaryStyle:(id)arg1 toNS:(id)arg2 ioFont:(*id)arg3 ligatures:(int)arg4 ;


@end


#endif