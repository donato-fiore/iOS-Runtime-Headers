// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATAPARSEDOPENURL_H
#define ATAPARSEDOPENURL_H

@class NSURL, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ATAParsedOpenURL : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) NSString *tabBarItemIdentifier; // ivar: _tabBarItemIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)_logStringForType:(NSUInteger)arg0 ;
+(id)parsedOpenURLWithURL:(id)arg0 andOptions:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithURL:(id)arg0 options:(id)arg1 type:(NSUInteger)arg2 ;
-(id)description;
-(id)init;


@end


#endif