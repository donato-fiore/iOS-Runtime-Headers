// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKIMAGESOURCEKEY_H
#define VKIMAGESOURCEKEY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VKImageSourceKey : NSObject {
    Color<unsigned char, 4, geo::ColorSpace::Linear> _shieldColor;
    IconVariant _iconVariant;
}


@property (readonly, nonatomic) float contentScale; // ivar: _contentScale
@property (readonly, nonatomic) unsigned int countryCode; // ivar: _countryCode
@property (nonatomic) unsigned char dataType; // ivar: _dataType
@property (nonatomic) unsigned int dataValue; // ivar: _dataValue
@property (retain, nonatomic) NSArray *fallbackImageKeys; // ivar: _fallbackImageKeys
@property (readonly, nonatomic) BOOL hasDataValue; // ivar: _hasDataValue
@property (readonly, nonatomic) unsigned int iconAttributeKey; // ivar: _iconAttributeKey
@property (readonly, nonatomic) unsigned int iconAttributeValue; // ivar: _iconAttributeValue
@property (nonatomic) CGPoint imageCenter; // ivar: _imageCenter
@property (readonly, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) unsigned int keyType; // ivar: _keyType
@property (retain, nonatomic) NSString *relatedText; // ivar: _relatedText
@property (readonly, nonatomic) unsigned int secondaryVariant;
@property (readonly, nonatomic) NSString *shieldText; // ivar: _shieldText
@property (readonly, nonatomic) NSString *shieldTextLocale; // ivar: _shieldTextLocale
@property (readonly, nonatomic) unsigned int shieldType; // ivar: _shieldType
@property (nonatomic) NSInteger sizeGroup; // ivar: _sizeGroup
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) ? transitLineColor;
@property (readonly, nonatomic) unsigned int variant;


-(id)_initWithKeyType:(unsigned int)arg0 ;
-(id)initWithDataType:(unsigned char)arg0 ;
-(id)initWithIconAttributeKey:(unsigned int)arg0 attributeValue:(unsigned int)arg1 ;
-(id)initWithIconName:(char *)arg0 ;
-(id)initWithLabelImageKey:(*void)arg0 ;
-(id)initWithShieldName:(char *)arg0 text:(char *)arg1 locale:(char *)arg2 color:(struct Color<unsigned char, 4, geo::ColorSpace::Linear> )arg3 ;
-(id)initWithShieldText:(char *)arg0 locale:(char *)arg1 type:(unsigned int)arg2 color:(struct Color<unsigned char, 4, geo::ColorSpace::Linear> )arg3 ;


@end


#endif