// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKFAVORITE_H
#define WLKFAVORITE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKFavorite : NSObject

@property (readonly, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *leagueID; // ivar: _leagueID
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithID:(id)arg0 name:(id)arg1 leagueID:(id)arg2 ;


@end


#endif