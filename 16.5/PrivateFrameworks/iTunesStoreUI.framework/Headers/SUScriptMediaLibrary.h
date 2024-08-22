// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTMEDIALIBRARY_H
#define SUSCRIPTMEDIALIBRARY_H

@class NSMutableArray, NSString;


#import "SUScriptObject.h"

@interface SUScriptMediaLibrary : SUScriptObject {
    NSMutableArray *_musicPlayers;
}


@property (readonly) NSString *itemPropertyAlbumArtist;
@property (readonly) NSString *itemPropertyAlbumTitle;
@property (readonly) NSString *itemPropertyArtist;
@property (readonly) NSString *itemPropertyComposer;
@property (readonly) NSString *itemPropertyDiscCount;
@property (readonly) NSString *itemPropertyDiscNumber;
@property (readonly) NSString *itemPropertyGenre;
@property (readonly) NSString *itemPropertyIsCompilation;
@property (readonly) NSString *itemPropertyIsHD;
@property (readonly) NSString *itemPropertyIsRental;
@property (readonly) NSString *itemPropertyLastPlayedDate;
@property (readonly) NSString *itemPropertyLyrics;
@property (readonly) NSString *itemPropertyMediaType;
@property (readonly) NSString *itemPropertyPersistentID;
@property (readonly) NSString *itemPropertyPlayCount;
@property (readonly) NSString *itemPropertyPlaybackDuration;
@property (readonly) NSString *itemPropertyPodcastTitle;
@property (readonly) NSString *itemPropertyRating;
@property (readonly) NSString *itemPropertySkipCount;
@property (readonly) NSString *itemPropertyStoreID;
@property (readonly) NSString *itemPropertyTitle;
@property (readonly) NSString *itemPropertyTrackCount;
@property (readonly) NSString *itemPropertyTrackNumber;
@property (readonly) NSString *mediaTypeAny;
@property (readonly) NSString *mediaTypeAnyAudio;
@property (readonly) NSString *mediaTypeAnyVideo;
@property (readonly) NSString *mediaTypeAudiobook;
@property (readonly) NSString *mediaTypeMovie;
@property (readonly) NSString *mediaTypeMusic;
@property (readonly) NSString *mediaTypeMusicVideo;
@property (readonly) NSString *mediaTypePodcast;
@property (readonly) NSString *mediaTypeTVShow;
@property (readonly) NSString *mediaTypeVideoPodcast;
@property (readonly) NSString *playerTypeApplication;
@property (readonly) NSString *playerTypeIPod;
@property (readonly) NSString *queryPresetAlbums;
@property (readonly) NSString *queryPresetArtists;
@property (readonly) NSString *queryPresetAudiobooks;
@property (readonly) NSString *queryPresetCompilations;
@property (readonly) NSString *queryPresetComposers;
@property (readonly) NSString *queryPresetGenres;
@property (readonly) NSString *queryPresetMovies;
@property (readonly) NSString *queryPresetMusicVideos;
@property (readonly) NSString *queryPresetPlaylists;
@property (readonly) NSString *queryPresetPodcasts;
@property (readonly) NSString *queryPresetSongs;
@property (readonly) NSString *queryPresetTVShows;
@property (readonly) NSString *queryPresetVideoPodcasts;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)_isRestricted;
-(id)_className;
-(id)attributeKeys;
-(id)containsAdamID:(id)arg0 ;
-(id)containsAdamIDs:(id)arg0 ;
-(id)makeCollectionWithItems:(id)arg0 ;
-(id)makePickerWithMediaTypes:(id)arg0 ;
-(id)makeQueryWithPreset:(id)arg0 ;
-(id)musicPlayerForType:(id)arg0 ;
-(id)playSongsInCollectionWithAdamID:(id)arg0 firstItemID:(id)arg1 ;
-(id)playSongsWithAdamIDs:(id)arg0 ;
-(id)playVideoWithAdamID:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)_connectNativeObject;
-(void)_launchMusicApp;
-(void)_launchMusicAppAfterPlayback:(id)arg0 firstItem:(id)arg1 ;
-(void)dealloc;
-(void)getProperties:(id)arg0 ofAdamIDs:(id)arg1 withCompletionFunction:(id)arg2 ;


@end


#endif