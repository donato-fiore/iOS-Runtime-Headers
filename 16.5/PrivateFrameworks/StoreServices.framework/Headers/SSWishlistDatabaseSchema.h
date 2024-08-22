// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSWISHLISTDATABASESCHEMA_H
#define SSWISHLISTDATABASESCHEMA_H


#import <Foundation/Foundation.h>


@interface SSWishlistDatabaseSchema : NSObject



+(id)databasePathWithAccountIdentifier:(NSInteger)arg0 ;
+(void)_migrate7000to7001InDatabase:(id)arg0 ;
+(void)_migrate7001to7002InDatabase:(id)arg0 ;
+(void)createSchemaInDatabase:(id)arg0 ;


@end


#endif