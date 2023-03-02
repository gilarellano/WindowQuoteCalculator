/* Store list of constants when calculating window/door quotes
 * Abbreviations:
 * Single Hung = SH, Double Hung = DH, Casement = CASE, Awning = AW, Fixed = FIX
 * Single Pane = SP, Dual Pane = DP, Low-E = LOW_E
 */

class WindowConstants {

    public:
        // Cost of wood per foot
        static const int DOUGLAS_FIR_COST_FT = 28;
        static const int MAHOGANY_COST_SQFT = 32; 

        // Cost of wood per grid
        static const int DOUGLAS_FIR_GRID = 40;
        static const int MAHOGANY_GRID = 40;
        
        // Cost of SP Glass
        static const int SP_COST_SQFT = 0;
        //static const int DOUBLE_STRENGTH_SQFT
        static const int SP_LAMINATED_COST_SQFT = 20;
        static const int SP_TEMPERED_COST_SQFT = 10;
        static const int SP_WHITE_LAMINATE_COST_SQFT = 25;
        static const int SP_OBSCURED_COST_SQFT = 10;        // P516, Rought Texture

        // Cost of DP Glass
        static const int DP_COST_SQFT = 25;
        static const int DP_LOW_E_COST_SQFT = 36;
        static const int DP_LOW_E_ARGON_COST_SQFT = 40;     // HAVE NOT PROGRAMMED THIS IN YET
        static const int DP_TEMPERED_COST_SQFT = 36;        // PRICE IS NOT UP TO DATE 
        static const int DP_LAMINATED_COST_SQFT = 33;       // PRICE IS NOT UP TO DATE 
        static const int DP_TEMPERED_LOW_E_COST_SQFT = 38;  // Waiting for updated price from ThermalSun
        static const int DP_SATIN_ETCHED_COST_SQFT = 38;
        static const int DP_OBSCURED_COST_SQFT = 26;

        // Installation fee per sash
        // ex: 1 bottom SH window, $250 only
        //     1 pair of DH windows, $650 
        static const int SH_INSTALLATION_FEE = 275;
        static const int DH_INSTALLATION_FEE = 325;
        static const int AW_INSTALLATION_FEE = 650;
        static const int FIXED_SMALL_INSTALLATION_FEE = 200;
        static const int FIXED_LARGE_INSTALLATION_FEE = 300;
        static const int CA_SMALL_INSTALLATION_FEE = 150;  // Less than 11 linear feet of wood
        static const int CA_LARGE_INSTALLATION_FEE = 300;  // More than 11 linear feet of wood
        //static const int AW_INSTALLATION_FEE = 250;

        static const double SF_SALES_TAX;

        /* TODO:
         * Constants: weight of the glass/sqft, wood/sqft 
         * Functions that track the weight of the window (glass + wood) to adjust the pricing of the installation
         */
          
};
