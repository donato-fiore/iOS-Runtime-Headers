// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI35SPORTSPLAYBYPLAYCOLLECTIONVIEWMODEL_H
#define _TTC8VIDEOSUI35SPORTSPLAYBYPLAYCOLLECTIONVIEWMODEL_H

@class TtC8VideosUI19CollectionViewModel;



@interface _TtC8VideosUI35SportsPlayByPlayCollectionViewModel : TtC8VideosUI19CollectionViewModel {
    ? numberOfPlays;
    ? queue;
    ? sport;
    ? cancellables;
    ? returningFromBackground;
    ? sportsSpoilersEnabled;
}




-(void)willEnterForeground;


@end


#endif