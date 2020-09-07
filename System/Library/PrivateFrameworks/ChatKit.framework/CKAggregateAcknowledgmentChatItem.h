/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>

@class NSArray, NSString, UIColor;

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem {

	long long _latestAcknowledgmentType;

}

@property (nonatomic,copy,readonly) NSArray * acknowledgments; 
@property (nonatomic,readonly) long long latestAcknowledgmentType;              //@synthesize latestAcknowledgmentType=_latestAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) BOOL includesFromMe; 
@property (nonatomic,readonly) BOOL latestIsFromMe; 
@property (nonatomic,readonly) BOOL includesMultiple; 
@property (nonatomic,readonly) char balloonOrientation; 
@property (copy,readonly) NSString * acknowledgmentImageName; 
@property (readonly) UIColor * acknowledgmentImageColor; 
@property (readonly) Class balloonViewClass; 
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(Class)cellClass;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(char)balloonOrientation;
-(Class)balloonViewClass;
-(id)associatedChatItemGUID;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(UIColor *)acknowledgmentImageColor;
-(NSArray *)acknowledgments;
-(NSString *)acknowledgmentImageName;
-(long long)latestAcknowledgmentType;
-(id)_imAggregateAcknowledgmentChatItem;
-(BOOL)includesFromMe;
-(BOOL)latestIsFromMe;
-(BOOL)includesMultiple;
@end
