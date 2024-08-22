// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIREMOTEDICTIONARYVIEWCONTROLLER_H
#define _UIREMOTEDICTIONARYVIEWCONTROLLER_H

@class NSArray, NSMutableDictionary;


#import "UITableViewController.h"
#import "_UIDictionaryManager.h"

@interface _UIRemoteDictionaryViewController : UITableViewController {
    NSArray *_availableDictionaries;
}


@property (retain, nonatomic) _UIDictionaryManager *dictionaryAssetManager; // ivar: _dictionaryAssetManager
@property (retain, nonatomic) NSMutableDictionary *downloadingAssets; // ivar: _downloadingAssets


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_downloadButton;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleDownloadButton:(id)arg0 ;
-(void)_startDownloadForDictionary:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif