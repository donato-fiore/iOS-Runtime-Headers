// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTREEXMLDOCUMENTSTRIPPER_H
#define WFTREEXMLDOCUMENTSTRIPPER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol WFWebPageProtocol;

#import <Foundation/Foundation.h>


@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol>

 {
    ? xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    BOOL hasFrameset;
    BOOL hasShortRefresh;
}




+(?)treeStripperWithXMLDocument;
-(?)initWithXMLDocument;
-(?)processXMLDocumentblockComments;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)URLString;
-(id)description;
-(id)images;
-(id)links;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagRating;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)pageContent;
-(id)pageTitle;
-(id)scriptBlocks;
-(void)dealloc;
-(void)processXMLDocument:(struct _xmlDoc *)arg0 ;
-(void)setPageTitle:(id)arg0 ;
-(void)setXMLDocument:(struct _xmlDoc *)arg0 ;
-(void)strip;


@end


#endif