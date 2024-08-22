// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHICONSHARESHEETACTIVITYITEMPROVIDER_H
#define SBHICONSHARESHEETACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, LSiTunesMetadata, UIImage, NSString, NSURL;



@interface SBHIconShareSheetActivityItemProvider : UIActivityItemProvider

@property (retain, nonatomic) LSiTunesMetadata *iTunesMetadata; // ivar: _iTunesMetadata
@property (retain, nonatomic) UIImage *itemImage; // ivar: _itemImage
@property (retain, nonatomic) NSString *itemName; // ivar: _itemName
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL


-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 icon:(id)arg1 ;
-(id)item;


@end


#endif