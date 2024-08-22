// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIWISHLIST_H
#define SKUIWISHLIST_H

@class SSWishlist, NSArray;

#import <Foundation/Foundation.h>


@interface SKUIWishlist : NSObject {
    SSWishlist *_database;
}


@property (readonly, nonatomic) NSInteger accountIdentifier;
@property (readonly, copy, nonatomic) NSArray *items;


+(id)activeWishlist;
-(BOOL)containsItemWithIdentifier:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAccountIdentifier:(NSInteger)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)postChangeNotification;
-(void)removeItemsWithItemIdentifiers:(id)arg0 ;


@end


#endif