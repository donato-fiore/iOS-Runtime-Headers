// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONFIGURATIONPARAMS_H
#define CONFIGURATIONPARAMS_H

@class NSDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface ConfigurationParams : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *logHandle; // ivar: _logHandle
@property (retain, nonatomic) NSDictionary *underlyingDictionary; // ivar: _underlyingDictionary


-(id)extractStringFromKey:(id)arg0 defaultTo:(id)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(int)extractKey:(id)arg0 toBOOL:(*BOOL)arg1 defaultTo:(BOOL)arg2 ;
-(int)extractKey:(id)arg0 toBool:(*BOOL)arg1 defaultTo:(BOOL)arg2 ;
-(int)extractKey:(id)arg0 toDouble:(*CGFloat)arg1 defaultTo:(CGFloat)arg2 ;
-(int)extractKey:(id)arg0 toNSUInteger:(*NSUInteger)arg1 defaultTo:(NSUInteger)arg2 ;
-(int)extractKey:(id)arg0 toUint32:(*unsigned int)arg1 defaultTo:(unsigned int)arg2 ;
-(int)extractKey:(id)arg0 toUint64:(*NSUInteger)arg1 defaultTo:(NSUInteger)arg2 ;


@end


#endif