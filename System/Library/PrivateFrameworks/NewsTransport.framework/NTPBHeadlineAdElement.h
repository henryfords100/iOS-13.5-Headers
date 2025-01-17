/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBHeadlineAdElement : PBCodable <NSCopying> {

	long long _channelContentProviderID;
	NSMutableArray* _articleIAdCategories;
	NSMutableArray* _articleIAdKeywords;
	NSMutableArray* _articleIAdSectionIDs;
	NSString* _articleID;
	NSString* _articleRating;
	NSMutableArray* _channelIAdCategories;
	NSMutableArray* _channelIAdKeywords;
	NSString* _channelID;
	NSString* _channelRating;
	BOOL _draftArticle;
	BOOL _paidArticle;
	BOOL _sponsoredArticle;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                               //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleRating; 
@property (nonatomic,retain) NSString * articleRating;                           //@synthesize articleRating=_articleRating - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIAdCategories;              //@synthesize articleIAdCategories=_articleIAdCategories - In the implementation block
@property (assign,nonatomic) BOOL hasPaidArticle; 
@property (assign,nonatomic) BOOL paidArticle;                                   //@synthesize paidArticle=_paidArticle - In the implementation block
@property (assign,nonatomic) BOOL hasSponsoredArticle; 
@property (assign,nonatomic) BOOL sponsoredArticle;                              //@synthesize sponsoredArticle=_sponsoredArticle - In the implementation block
@property (assign,nonatomic) BOOL hasDraftArticle; 
@property (assign,nonatomic) BOOL draftArticle;                                  //@synthesize draftArticle=_draftArticle - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIAdSectionIDs;              //@synthesize articleIAdSectionIDs=_articleIAdSectionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelIAdKeywords;                //@synthesize channelIAdKeywords=_channelIAdKeywords - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelID; 
@property (nonatomic,retain) NSString * channelID;                               //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelRating; 
@property (nonatomic,retain) NSString * channelRating;                           //@synthesize channelRating=_channelRating - In the implementation block
@property (nonatomic,retain) NSMutableArray * channelIAdCategories;              //@synthesize channelIAdCategories=_channelIAdCategories - In the implementation block
@property (assign,nonatomic) BOOL hasChannelContentProviderID; 
@property (assign,nonatomic) long long channelContentProviderID;                 //@synthesize channelContentProviderID=_channelContentProviderID - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIAdKeywords;                //@synthesize articleIAdKeywords=_articleIAdKeywords - In the implementation block
+(Class)articleIAdCategoriesType;
+(Class)articleIAdSectionIDsType;
+(Class)channelIAdKeywordsType;
+(Class)channelIAdCategoriesType;
+(Class)articleIAdKeywordsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(NSString *)channelID;
-(void)setChannelID:(NSString *)arg1 ;
-(BOOL)hasArticleID;
-(void)addArticleIAdCategories:(id)arg1 ;
-(void)addArticleIAdSectionIDs:(id)arg1 ;
-(void)addChannelIAdKeywords:(id)arg1 ;
-(void)addChannelIAdCategories:(id)arg1 ;
-(void)addArticleIAdKeywords:(id)arg1 ;
-(void)setArticleRating:(NSString *)arg1 ;
-(void)setChannelRating:(NSString *)arg1 ;
-(BOOL)hasArticleRating;
-(void)clearArticleIAdCategories;
-(unsigned long long)articleIAdCategoriesCount;
-(id)articleIAdCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setPaidArticle:(BOOL)arg1 ;
-(void)setHasPaidArticle:(BOOL)arg1 ;
-(BOOL)hasPaidArticle;
-(void)setSponsoredArticle:(BOOL)arg1 ;
-(void)setHasSponsoredArticle:(BOOL)arg1 ;
-(BOOL)hasSponsoredArticle;
-(void)setDraftArticle:(BOOL)arg1 ;
-(void)setHasDraftArticle:(BOOL)arg1 ;
-(BOOL)hasDraftArticle;
-(void)clearArticleIAdSectionIDs;
-(unsigned long long)articleIAdSectionIDsCount;
-(id)articleIAdSectionIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearChannelIAdKeywords;
-(unsigned long long)channelIAdKeywordsCount;
-(id)channelIAdKeywordsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChannelID;
-(BOOL)hasChannelRating;
-(void)clearChannelIAdCategories;
-(unsigned long long)channelIAdCategoriesCount;
-(id)channelIAdCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)setChannelContentProviderID:(long long)arg1 ;
-(void)setHasChannelContentProviderID:(BOOL)arg1 ;
-(BOOL)hasChannelContentProviderID;
-(void)clearArticleIAdKeywords;
-(unsigned long long)articleIAdKeywordsCount;
-(id)articleIAdKeywordsAtIndex:(unsigned long long)arg1 ;
-(NSString *)articleRating;
-(NSMutableArray *)articleIAdCategories;
-(void)setArticleIAdCategories:(NSMutableArray *)arg1 ;
-(BOOL)paidArticle;
-(BOOL)sponsoredArticle;
-(BOOL)draftArticle;
-(NSMutableArray *)articleIAdSectionIDs;
-(void)setArticleIAdSectionIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)channelIAdKeywords;
-(void)setChannelIAdKeywords:(NSMutableArray *)arg1 ;
-(NSString *)channelRating;
-(NSMutableArray *)channelIAdCategories;
-(void)setChannelIAdCategories:(NSMutableArray *)arg1 ;
-(long long)channelContentProviderID;
-(NSMutableArray *)articleIAdKeywords;
-(void)setArticleIAdKeywords:(NSMutableArray *)arg1 ;
@end

