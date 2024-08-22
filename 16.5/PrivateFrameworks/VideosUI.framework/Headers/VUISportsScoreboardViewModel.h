// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUISPORTSSCOREBOARDVIEWMODEL_H
#define VUISPORTSSCOREBOARDVIEWMODEL_H

@class NSDictionary, NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface VUISportsScoreboardViewModel : NSObject {
    NSDictionary *_dictionaryRepresentation;
}


@property (readonly, nonatomic) NSString *canonicalId; // ivar: _canonicalId
@property (nonatomic) BOOL configureScoreUpdates; // ivar: _configureScoreUpdates
@property (readonly, nonatomic) NSDictionary *contentMetadata; // ivar: _contentMetadata
@property (readonly, nonatomic) BOOL isVersus; // ivar: _isVersus
@property (readonly, nonatomic) NSDate *lastUpdatedTime; // ivar: _lastUpdatedTime
@property (readonly, nonatomic) NSDictionary *leagueContext; // ivar: _leagueContext
@property (readonly, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly, nonatomic) BOOL showScoreboard; // ivar: _showScoreboard


-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsContextDictionary;
-(void)removeUnicodeFromScoreValuesIfNeeded;


@end


#endif