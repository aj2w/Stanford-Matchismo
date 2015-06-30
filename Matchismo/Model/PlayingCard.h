//
//  PlayingCard.h
//  Matchismo
//
//  Created by Anuj Jhunjhunwala on 6/24/15.
//  Copyright (c) 2015 StanfordCS. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
