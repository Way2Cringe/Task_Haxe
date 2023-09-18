import model.ScreenPageModel;
import model.GridButtonModel;
import model.TabModel;
import model.PanelModel;
import model.GridPageModel;
import DataProvider;

abstract class DataBase {
	static var panelModels:Array<PanelModel>;
	static var gridPageModels:Array<GridPageModel>;
	static var screenPageModels:Array<ScreenPageModel>;

	// ----------------------------------
	// ---------- PANEL MODELS ----------
	// ----------------------------------

	/**
	 * Returnes PanelModels or tries to load from xml
	 */
	public static function GetOrLoadPanelModels():Array<PanelModel> {
		if (panelModels == null)
			LoadPanelModels();
		return panelModels;
	}

	/**
	 * Returnes PanelModels. BETTER USE GetOrLoadPanelModels()
	 */
	static function GetPanelModels():Array<PanelModel> {
		return panelModels;
	}

	/**
	 * Returnes first PanelModel or tries to load from xml. Prefered method
	 */
	public static function GetOrLoadFirstPanelModel():PanelModel {
		return GetOrLoadPanelModels()[0];
	}

	/**
	 * Returnes first PanelModel. BETTER USE GetOrLoadFirstPanelModel()
	 */
	static function GetFirstPanelModel():PanelModel {
		return GetPanelModels()[0];
	}

	/**
	 * Clears PanelModels from DataBase
	 */
	public static function ClearPanelModels() {
		panelModels == null;
	}

	/**
	 * Loads PanelModels from xml;
	 */
	public static function LoadPanelModels() {
		panelModels = DataProvider.Load('PanelModel');
	}

	/**
	 * Save current PanelModels into xml file
	 */
	public static function SavePanelModels() {
		DataProvider.Save(panelModels, 'PanelModel');
	}

	// -------------------------------------
	// ---------- GRIDPAGE MODELS ----------
	// -------------------------------------

	/**
	 * Returnes GridPageModels or tries to load from xml
	 */
	public static function GetOrLoadGridPageModels():Array<GridPageModel> {
		if (gridPageModels == null)
			LoadGridPageModels();
		return gridPageModels;
	}

	/**
	 * Returnes GridPageModels. BETTER USE GetOrLoadGridPageModels()
	 */
	static function GetGridPageModels():Array<GridPageModel> {
		return gridPageModels;
	}

	/**
	 * Returnes GridPageModel by id or tries to load from xml. Prefered method
	 */
	public static function GetOrLoadGridPageModelById(id:Int):GridPageModel {
		if (gridPageModels == null)
			LoadGridPageModels();
		return GetGridPageModelById(id);
	}

	/**
	 * Returnes GridPageModel by id. BETTER USE GetOrLoadGridPageModelById()
	 */
	static function GetGridPageModelById(id:Int):GridPageModel {
		var models:Array<GridPageModel> = GetGridPageModels();
		for (model in models) {
			if (model.id == id) {
				return model;
			}
		}
		return null; // Return null if no matching model is found
	}

	/**
	 * Clears GridPageModels from DataBase
	 */
	public static function ClearGridPageModels() {
		gridPageModels == null;
	}

	/**
	 * Loads GridPageModels from xml;
	 */
	public static function LoadGridPageModels() {
		gridPageModels = DataProvider.Load('GridPageModel');
	}

	/**
	 * Save current GridPageModels into xml file
	 */
	public static function SaveGridPageModels() {
		DataProvider.Save(gridPageModels, 'GridPageModel');
	}
    // ---------------------------------------
	// ---------- SCREENPAGE MODELS ----------
	// ---------------------------------------

	/**
	 * Returnes ScreenPageModels or tries to load from xml
	 */
	public static function GetOrLoadScreenPageModels():Array<ScreenPageModel> {
		if (screenPageModels == null)
			LoadScreenPageModels();
		return screenPageModels;
	}

	/**
	 * Returnes ScreenPageModels. BETTER USE GetOrLoadScreenPageModels()
	 */
	static function GetScreenPageModels():Array<ScreenPageModel> {
		return screenPageModels;
	}

	/**
	 * Returnes ScreenPageModel by id or tries to load from xml. Prefered method
	 */
	public static function GetOrLoadScreenPageModelById(id:Int):ScreenPageModel {
		if (screenPageModels == null)
			LoadScreenPageModels();
		return GetScreenPageModelById(id);
	}

	/**
	 * Returnes ScreenPageModel by id. BETTER USE GetOrLoadScreenPageModelById()
	 */
	static function GetScreenPageModelById(id:Int):ScreenPageModel {
		var models:Array<ScreenPageModel> = GetScreenPageModels();
		for (model in models) {
			if (model.id == id) {
				return model;
			}
		}
		return null; // Return null if no matching model is found
	}

	/**
	 * Clears ScreenPageModels from DataBase
	 */
	public static function ClearScreenPageModels() {
		screenPageModels == null;
	}

	/**
	 * Loads ScreenPageModels from xml;
	 */
	public static function LoadScreenPageModels() {
		screenPageModels = DataProvider.Load('ScreenPageModel');
	}

	/**
	 * Save current GridPageModels into xml file
	 */
	public static function SaveScreenPageModels() {
		DataProvider.Save(screenPageModels, 'ScreenPageModel');
	}
	/**
	 * Fills the database with standart value. Used to generate xml files.
	 */
	public static function FillWithStartingData() {
		panelModels = [
			new PanelModel([new TabModel(0, 'Fruits'), new TabModel(1, 'Animals'), new TabModel(2, 'Flowers'),])
		];
		gridPageModels = [];
		for (i in 0...3) {
			var m = 4 - i;
			var buttons:Array<Array<GridButtonModel>> = [];
			for (j in 0...m) {
				var row:Array<GridButtonModel> = [];
				for (k in 0...m) {
					row.push(new GridButtonModel(Std.string(i) + '_' + Std.string(j * m + k) + '.png', i * 100 + j * m + k));
				}
				buttons.push(row);
			}
			gridPageModels.push(new GridPageModel(i, buttons));
		}
        screenPageModels = [
            new ScreenPageModel(0, 'Apple', 'An apple is a round, edible fruit produced by an apple tree (Malus domestica). Apple trees are cultivated worldwide and are the most widely grown species in the genus Malus. The tree originated in Central Asia, where its wild ancestor, Malus sieversii, is still found. Apples have been grown for thousands of years in Asia and Europe and were introduced to North America by European colonists. Apples have religious and mythological significance in many cultures, including Norse, Greek, and European Christian tradition.'),
            new ScreenPageModel(1, 'Banana', 'A banana is an elongated, edible fruit - botanically a berry - produced by several kinds of large herbaceous flowering plants in the genus Musa. In some countries, bananas used for cooking may be called "plantains", distinguishing them from dessert bananas. The fruit is variable in size, color, and firmness, but is usually elongated and curved, with soft flesh rich in starch covered with a rind, which may be green, yellow, red, purple, or brown when ripe. The fruits grow upward in clusters near the top of the plant.'),
            new ScreenPageModel(2, 'Orange', 'An orange is a fruit of various citrus species in the family Rutaceae (see list of plants known as orange); it primarily refers to Citrus x sinensis, which is also called sweet orange, to distinguish it from the related Citrus x aurantium, referred to as bitter orange. The sweet orange reproduces asexually (apomixis through nucellar embryony); varieties of the sweet orange arise through mutations.'),
            new ScreenPageModel(3, 'Strawberry', 'The garden strawberry (or simply strawberry)is a widely grown hybrid species of the genus Fragaria, collectively known as the strawberries, which are cultivated worldwide for their fruit. The fruit is widely appreciated for its characteristic aroma, bright red color, juicy texture, and sweetness. It is consumed in large quantities, either fresh or in such prepared foods as jam, juice, pies, ice cream, milkshakes, and chocolates. Artificial strawberry flavorings and aromas are also widely used in products such as candy, soap, lip gloss, perfume, and many others.'),
            new ScreenPageModel(4, 'Grape', 'A grape is a fruit, botanically a berry, of the deciduous woody vines of the flowering plant genus Vitis. Grapes are a non-climacteric type of fruit, generally occurring in clusters. The cultivation of grapes began perhaps 8,000 years ago, and the fruit has been used as human food over history. Eaten fresh or in dried form (as raisins, currants and sultanas), grapes also hold cultural significance in many parts of the world, particularly for their role in winemaking. Other grape-derived products include various types of jam, juice, vinegar and oil.'),
            new ScreenPageModel(5, 'Pineapple', 'The pineapple (Ananas comosus) is a tropical plant with an edible fruit; it is the most economically significant plant in the family Bromeliaceae. The pineapple is indigenous to South America, where it has been cultivated for many centuries. The introduction of the pineapple to Europe in the 17th century made it a significant cultural icon of luxury. Since the 1820s, pineapple has been commercially grown in greenhouses and many tropical plantations.'),
            new ScreenPageModel(6, 'Watermelon', 'Watermelon (Citrullus lanatus) is a flowering plant species of the Cucurbitaceae family and the name of its edible fruit. A scrambling and trailing vine-like plant, it is a highly cultivated fruit worldwide, with more than 1,000 varieties. Watermelon is grown in favorable climates from tropical to temperate regions worldwide for its large edible fruit, which is a berry with a hard rind and no internal divisions, and is botanically called a pepo. The sweet, juicy flesh is usually deep red to pink, with many black seeds, although seedless varieties exist. The fruit can be eaten raw or pickled, and the rind is edible after cooking. It may also be consumed as a juice or an ingredient in mixed beverages.'),
            new ScreenPageModel(7, 'Kiwifruit', 'Kiwifruit (often shortened to kiwi in North American, British and continental European English) or Chinese gooseberry is the edible berry of several species of woody vines in the genus Actinidia. The most common cultivar group of kiwifruit (Actinidia deliciosa \'Hayward\') is oval, about the size of a large hen\'s egg: 5-8 centimetres (2-3 inches) in length and 4.5-5.5 cm (1+3/4-2+1/4 in) in diameter. It has a thin, fuzzy, fibrous, tart but edible light brown skin and light green or golden flesh with rows of tiny, black, edible seeds. The fruit has a soft texture with a sweet and unique flavour'),
            new ScreenPageModel(8, 'Mango', 'A mango is an edible stone fruit produced by the tropical tree Mangifera indica. It is believed to have originated in southern Asia, particularly in eastern India, Bangladesh, and the Andaman Islands.[1] M. indica has been cultivated in South and Southeast Asia since ancient times resulting in two types of modern mango cultivars: the "Indian type" and the "Southeast Asian type". Other species in the genus Mangifera also produce edible fruits that are also called "mangoes", the majority of which are found in the Malesian ecoregion.'),
            new ScreenPageModel(9, 'Pear', 'Pears are fruits produced and consumed around the world, growing on a tree and harvested in late summer into mid-autumn. The pear tree and shrub are a species of genus Pyrus, in the family Rosaceae, bearing the pomaceous fruit of the same name. Several species of pears are valued for their edible fruit and juices, while others are cultivated as trees'),
            new ScreenPageModel(10, 'Cherry', 'A cherry is the fruit of many plants of the genus Prunus, and is a fleshy drupe (stone fruit). Commercial cherries are obtained from cultivars of several species, such as the sweet Prunus avium and the sour Prunus cerasus. The name \'cherry\' also refers to the cherry tree and its wood, and is sometimes applied to almonds and visually similar flowering trees in the genus Prunus, as in "ornamental cherry" or "cherry blossom". Wild cherry may refer to any of the cherry species growing outside cultivation, although Prunus avium is often referred to specifically by the name "wild cherry" in the British Isles.'),
            new ScreenPageModel(11, 'Lemon', 'The lemon (Citrus x limon) is a species of small evergreen tree in the flowering plant family Rutaceae, native to Asia, primarily Northeast India (Assam), Northern Myanmar, or China. The tree\'s ellipsoidal yellow fruit is used for culinary and non-culinary purposes throughout the world, primarily for its juice, which has both culinary and cleaning uses.'),
            new ScreenPageModel(12, 'Peach', 'The peach (Prunus persica) is a deciduous tree first domesticated and cultivated in Zhejiang province of Eastern China. It bears edible juicy fruits with various characteristics, most called peaches and others (the glossy-skinned, non-fuzzy varieties), nectarines'),
            new ScreenPageModel(13, 'Raspberry', 'The raspberry is the edible fruit of a multitude of plant species in the genus Rubus of the rose family, most of which are in the subgenus Idaeobatus. The name also applies to these plants themselves. Raspberries are perennial with woody stems. World production of raspberries in 2020 was 895,771 tonnes.'),
            new ScreenPageModel(14, 'Blackberry', 'The blackberry is an edible fruit produced by many species in the genus Rubus in the family Rosaceae, hybrids among these species within the subgenus Rubus, and hybrids between the subgenera Rubus and Idaeobatus. The taxonomy of blackberries has historically been confused because of hybridization and apomixis, so that species have often been grouped together and called species aggregates'),
            new ScreenPageModel(15, 'Avocado', 'The avocado (Persea americana) is a medium-sized, evergreen tree in the laurel family (Lauraceae). It is native to the Americas and was first domesticated in Mesoamerica more than 5,000 years ago. Then as now it was prized for its large and unusually oily fruit. The tree likely originated in the highlands bridging south-central Mexico and Guatemala. Its fruit, sometimes also referred to as an alligator pear or avocado pear, is botanically a large berry containing a single large seed.'),
            new ScreenPageModel(100, 'Lion', 'The lion (Panthera leo) is a large cat of the genus Panthera native to Africa and India. It has a muscular, broad-chested body; short, rounded head; round ears; and a hairy tuft at the end of its tail. It is sexually dimorphic; adult male lions are larger than females and have a prominent mane. It is a social species, forming groups called prides. A lion\'s pride consists of a few adult males, related females, and cubs. Groups of female lions usually hunt together, preying mostly on large ungulates. The lion is an apex and keystone predator; although some lions scavenge when opportunities occur and have been known to hunt humans, lions typically do not actively seek out and prey on humans.' ),
            new ScreenPageModel(101, 'Elephant', 'Elephants are the largest living land animals. Three living species are currently recognised: the African bush elephant, the African forest elephant, and the Asian elephant. They are the only surviving members of the family Elephantidae and the order Proboscidea; extinct relatives include mammoths and mastodons. Distinctive features of elephants include a long proboscis called a trunk, tusks, large ear flaps, pillar-like legs, and tough but sensitive grey skin. The trunk is prehensile, bringing food and water to the mouth and grasping objects. Tusks, which are derived from the incisor teeth, serve both as weapons and as tools for moving objects and digging. The large ear flaps assist in maintaining a constant body temperature as well as in communication. African elephants have larger ears and concave backs, whereas Asian elephants have smaller ears and convex or level backs.'),
            new ScreenPageModel(102, 'Tiger', 'The tiger (Panthera tigris) is the largest living cat species and a member of the genus Panthera. It is most recognisable for its dark vertical stripes on orange fur with a white underside. An apex predator, it primarily preys on ungulates, such as deer and wild boar. It is territorial and generally a solitary but social predator, requiring large contiguous areas of habitat to support its requirements for prey and rearing of its offspring. Tiger cubs stay with their mother for about two years and then become independent, leaving their mother\'s home range to establish their own.'),
            new ScreenPageModel(103, 'Giraffe', 'The giraffe is a large African hoofed mammal belonging to the genus Giraffa. It is the tallest living terrestrial animal and the largest ruminant on Earth. Traditionally, giraffes were thought to be one species, Giraffa camelopardalis, with nine subspecies. Most recently, researchers proposed dividing them into up to eight extant species due to new research into their mitochondrial and nuclear DNA, as well as morphological measurements. Seven other extinct species of Giraffa are known from the fossil record.'),
            new ScreenPageModel(104,  'Zebra', 'Zebras (subgenus Hippotigris) are African equines with distinctive black-and-white striped coats. There are three living species: the Grévy\'s zebra (Equus grevyi), plains zebra (E. quagga), and the mountain zebra (E. zebra). Zebras share the genus Equus with horses and asses, the three groups being the only living members of the family Equidae. Zebra stripes come in different patterns, unique to each individual. Several theories have been proposed for the function of these stripes, with most evidence supporting them as a deterrent for biting flies. Zebras inhabit eastern and southern Africa and can be found in a variety of habitats such as savannahs, grasslands, woodlands, shrublands, and mountainous areas'),
            new ScreenPageModel(105,  'Kangaroo', 'Kangaroos are four marsupials from the family Macropodidae (macropods, meaning "large foot"). In common use the term is used to describe the largest species from this family, the red kangaroo, as well as the antilopine kangaroo, eastern grey kangaroo, and western grey kangaroo.[1] Kangaroos are indigenous to Australia and New Guinea. The Australian government estimates that 42.8 million kangaroos lived within the commercial harvest areas of Australia in 2019, down from 53.2 million in 2013.['),
            new ScreenPageModel(106,  'Panda', 'The giant panda (Ailuropoda melanoleuca), sometimes called a panda bear or simply panda, is a bear species endemic to China. It is characterised by its bold black-and-white coat and rotund body. The name "giant panda" is sometimes used to distinguish it from the red panda, a neighboring musteloid. Though it belongs to the order Carnivora, the giant panda is a folivore, with bamboo shoots and leaves making up more than 99% of its diet.[5] Giant pandas in the wild occasionally eat other grasses, wild tubers, or even meat in the form of birds, rodents, or carrion. In captivity, they may receive honey, eggs, fish, yams, shrub leaves, oranges, or bananas along with specially prepared food.'),
            new ScreenPageModel(107,  'Penguin', 'Penguins are a group of aquatic flightless birds from the order Sphenisciformes. They live almost exclusively in the Southern Hemisphere: only one species, the Galápagos penguin, is found north of the Equator. Highly adapted for life in the ocean water, penguins have countershaded dark and white plumage and flippers for swimming. Most penguins feed on krill, fish, squid and other forms of sea life which they catch with their bills and swallow whole while swimming. A penguin has a spiny tongue and powerful jaws to grip slippery prey'),
            new ScreenPageModel(108,  'Dolphin', 'A dolphin is an aquatic mammal within the infraorder Cetacea. Dolphin species belong to the families Delphinidae (the oceanic dolphins), Platanistidae (the Indian river dolphins), Iniidae (the New World river dolphins), Pontoporiidae (the brackish dolphins), and possibly extinct Lipotidae (baiji or Chinese river dolphin). There are 40 extant species named as dolphins.'),
            new ScreenPageModel(200,  'Rose', 'A rose is either a woody perennial flowering plant of the genus Rosa, in the family Rosaceae, or the flower it bears. There are over three hundred species and tens of thousands of cultivars.[citation needed] They form a group of plants that can be erect shrubs, climbing, or trailing, with stems that are often armed with sharp prickles.[2] Their flowers vary in size and shape and are usually large and showy, in colours ranging from white through yellows and reds. Most species are native to Asia, with smaller numbers native to Europe, North America, and northwestern Africa. Species, cultivars and hybrids are all widely grown for their beauty and often are fragrant. Roses have acquired cultural significance in many societies. Rose plants range in size from compact, miniature roses, to climbers that can reach seven meters in height. Different species hybridize easily, and this has been used in the development of the wide range of garden roses.'),
            new ScreenPageModel(201,  'Tulip', 'Tulips (Tulipa) are a genus of spring-blooming perennial herbaceous bulbiferous geophytes (having bulbs as storage organs). The flowers are usually large, showy, and brightly coloured, generally red, orange, pink, yellow, or white (usually in warm colours). They often have a different coloured blotch at the base of the tepals (petals and sepals, collectively), internally. Because of a degree of variability within the populations and a long history of cultivation, classification has been complex and controversial. The tulip is a member of the lily family, Liliaceae, along with 14 other genera, where it is most closely related to Amana, Erythronium, and Gagea in the tribe Lilieae.'),
            new ScreenPageModel(202,  'Sunflower', 'The common sunflower (Helianthus annuus) is a species of large annual forb of the genus Helianthus. It is commonly grown as a crop for its edible oily seeds. Apart from cooking oil production, it is also used as livestock forage (as a meal or a silage plant), as bird food, in some industrial applications, and as an ornamental in domestic gardens. Wild H. annuus is a widely branched annual plant with many flower heads. The domestic sunflower, however, often possesses only a single large inflorescence (flower head) atop an unbranched stem. Etymology: In the binomial name Helianthus annuus the genus name is derived from the Greek ἥλιος : hḗlios \'sun\' and ἄνθος : ánthos \'flower\'. The species name annuus means \'annual\' in Latin. DomesticationThe plant was first domesticated in the Americas. Sunflower seeds were brought to Europe from the Americas in the 16th century, where, along with sunflower oil, they became a widespread cooking ingredient. With time, the bulk of industrial-scale production has shifted to Eastern Europe, and (as of 2020) Russia and Ukraine together produce over half of worldwide seed production. The plant has an erect rough-hairy stem, reaching typical heights of 3 metres (10 feet). The tallest sunflower on record achieved 9.17 m (30 ft 1 in). Sunflower leaves are broad, coarsely toothed, rough and mostly alternate; those near the bottom are largest and commonly heart-shaped. Flower: The plant flowers in summer. What is often called the "flower" of the sunflower is actually a "flower head" (pseudanthium), 7.5-12.5 centimetres (3-5 in) wide, of numerous small individual five-petaled flowers ("florets"). The outer flowers, which resemble petals, are called ray flowers. Each "petal" consists of a ligule composed of fused petals of an asymmetrical ray flower. They are sexually sterile and may be yellow, red, orange, or other colors. The spirally arranged flowers in the center of the head are called disk flowers. These mature into fruit (sunflower "seeds").The prairie sunflower (H. petiolaris) is similar in appearance to the wild common sunflower; the scales in its central disk are tipped by white hairs. Heliotropism Flower heads facing east, away from the late afternoon sun. A common misconception is that flowering sunflower heads track the Sun across the sky. Although immature flower buds exhibit this behaviour, the mature flowering heads point in a fixed (and typically easterly) direction throughout the day. This old misconception was disputed in 1597 by the English botanist John Gerard, who grew sunflowers in his famous herbal garden: "[some] have reported it to turn with the Sun, the which I could never observe, although I have endeavored to find out the truth of it." The uniform alignment of sunflower heads in a field might give some people the false impression that the flowers are tracking the Sun. This alignment results from heliotropism in an earlier development stage, the young flower stage, before full maturity of flower heads (anthesis). Young sunflowers orient themselves in the direction of the sun. At dawn the head of the flower faces east and moves west throughout the day. When sunflowers reach full maturity they no longer follow the sun, and continuously face east. Young flowers reorient overnight to face east in anticipation of the morning. Their heliotropic motion is a circadian rhythm, synchronized by the sun, which continues if the sun disappears on cloudy days or if plants are moved to constant light. They are able to regulate their circadian rhythm in response to the blue-light emitted by a light source. If a sunflower plant in the bud stage is rotated 180°, the bud will be turning away from the sun for a few days, as resynchronization with the sun takes time. When growth of the flower stalk stops and the flower is mature, the heliotropism also stops and the flower faces east from that moment onward. This eastward orientation allows rapid warming in the morning and, as a result, an increase in pollinator visits. Sunflowers do not have a pulvinus below their inflorescence. A pulvinus is a flexible segment in the leaf stalks (petiole) of some plant species and functions as a \'joint\'. It effectuates leaf motion due to reversible changes in turgor pressure, which occurs without growth. The sensitive plant\'s closing leaves are a good example of reversible leaf movement via pulvinuli.'),
            new ScreenPageModel(203,  'Lilium', 'Lilium is a genus of herbaceous flowering plants growing from bulbs, all with large prominent flowers. They are the true lilies. Lilies are a group of flowering plants which are important in culture and literature in much of the world. Most species are native to the Northern Hemisphere and their range is temperate climates and extends into the subtropics. Many other plants have "lily" in their common names, but do not belong to the same genus and are therefore not true lilies'),
        
        ];

        
	}
}
