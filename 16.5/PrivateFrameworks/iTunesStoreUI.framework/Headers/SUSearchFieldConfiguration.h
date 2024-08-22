// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSEARCHFIELDCONFIGURATION_H
#define SUSEARCHFIELDCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUClientInterface.h"

@interface SUSearchFieldConfiguration : NSObject <NSCopying>

 {
    SUClientInterface *_clientInterface;
    *__CFDictionary _hintURLs;
    *__CFDictionary _searchURLs;
    CGFloat _widthLandscape;
    CGFloat _widthPortrait;
}


@property (readonly, nonatomic) NSString *cancelString; // ivar: _cancelString
@property (readonly, nonatomic) NSInteger location; // ivar: _location
@property (readonly, nonatomic) NSString *placeholderString; // ivar: _placeholder
@property (readonly, nonatomic, getter=isRootViewOnly) BOOL rootViewOnly; // ivar: _rootViewOnly
@property (readonly, nonatomic) NSString *userDefaultsKey; // ivar: _userDefaultsKey
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(id)defaultConfiguration;
+(id)defaultConfigurationWithClientInterface:(id)arg0 ;
-(CGFloat)widthForOrientation:(NSInteger)arg0 ;
-(NSInteger)_locationForString:(id)arg0 ;
-(id)URLRequestPropertiesWithBaseURL:(id)arg0 forNetworkType:(NSInteger)arg1 ;
-(id)_initWithClientInterface:(id)arg0 ;
-(id)_newQueryStringDictionaryForNetworkType:(NSInteger)arg0 ;
-(id)_urlRequestPropertiesForURLBagKey:(id)arg0 networkType:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hintsURLRequestPropertiesForNetworkType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 clientInterface:(id)arg1 ;
-(id)searchURLRequestPropertiesForNetworkType:(NSInteger)arg0 ;
-(struct __CFDictionary *)_newURLsDictionaryWithDictionary:(id)arg0 ;
-(void)_setHintURLsFromDictionary:(id)arg0 ;
-(void)_setSearchURLsFromDictionary:(id)arg0 ;
-(void)dealloc;
-(void)loadFromDictionary:(id)arg0 ;


@end


#endif