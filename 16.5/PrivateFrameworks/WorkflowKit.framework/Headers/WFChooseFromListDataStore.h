// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHOOSEFROMLISTDATASTORE_H
#define WFCHOOSEFROMLISTDATASTORE_H

@class NSMutableDictionary, NSString, NSXPCListenerEndpoint, NSXPCListener;
@protocol NSXPCListenerDelegate, WFDialogListItemStore;

#import <Foundation/Foundation.h>


@interface WFChooseFromListDataStore : NSObject <NSXPCListenerDelegate, WFDialogListItemStore>



@property (retain, nonatomic) NSMutableDictionary *contentItems; // ivar: _contentItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)addContentItem:(id)arg0 withIdentifier:(id)arg1 ;
-(void)hasAltTextForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)hasImageForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)hasSubtitleForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)loadAltTextWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)loadImageWithIdentifier:(id)arg0 size:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)loadSubtitleWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removeContentItemWithIdentifier:(id)arg0 ;


@end


#endif