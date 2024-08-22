// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKSPORTSFAVORITE_H
#define WLKSPORTSFAVORITE_H

@class NSString, NSDictionary;
@protocol WLKSportsFavoriteRepresentable;

#import <Foundation/Foundation.h>


@interface WLKSportsFavorite : NSObject <WLKSportsFavoriteRepresentable>



@property (readonly, copy, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, copy, nonatomic) NSString *abbreviation; // ivar: _abbreviation
@property (readonly, copy, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *images; // ivar: _images
@property (readonly, nonatomic) BOOL isHome; // ivar: _isHome
@property (readonly, copy, nonatomic) NSString *leagueId; // ivar: _leagueId
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *nickName; // ivar: _nickName
@property (readonly, copy, nonatomic) NSString *shortName; // ivar: _shortName
@property (readonly) Class superclass;


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithID:(id)arg0 ;


@end


#endif